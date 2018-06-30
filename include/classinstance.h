#ifndef classinstance_h
#define classinstance_h

#include "tipos.h"
#include "object.h"

#include <map>
#include <string>
#include <queue>

using namespace std;

class ClassRuntime;
class Thread;
/**
 * Representa uma instância de classe.
 */
class ClassInstance : public Object {
    
public:
	int lockCounter;
	queue<Thread*> blockingThreads;
	queue<Thread*> waitingThreads;
	Thread* lockOwner;
	void activeBlocking();
    /**
     * @brief Construtor padrão.
     * @param classRuntime A classe correspondente ao objeto.
     */
    ClassInstance(ClassRuntime *classRuntime);
    
    /**
     * @brief Destrutor padrão.
     */
    ~ClassInstance();
    
    /**
     * @brief Método utilizado para declaração do tipo de objeto.
     * @return O tipo de objeto.
     */
    ObjectType objectType();
    
    /**
     * @brief Obtém a classe correspondente ao objeto.
     * @return Retorna a classe do objeto.
     */
    ClassRuntime* getClassRuntime();
    
    /**
     * @brief Adiciona um valor no field de índice informado.
     *
     * Caso o índice do field (i.e. não exista na CP da classe atual seja inválido), um erro será emitido.
     * @param value O valor que será inserido no field.
     * @param fieldName O nome do field que será alterado.
     */
    void putValueIntoField(Value value, string fieldName);
    
    /**
     * @brief Obtém o valor contido em um field informado.
     *
     * Caso o nome do field seja inválido, um erro será emitido.
     * @param index O índice do field.
     * @return O valor correspondente ao field.
     */
    Value getValueFromField(string fieldName);
	void initFields(ClassFile * classFile, field_info * fields);
	void initMethods(ClassFile * , method_info * );
    /**
     * @brief Verifica se existe um field com o nome dado.
     * @param string O nome do field.
     * @return Retorna \c true caso o field existir, e \c false caso contrário.
     */
    bool fieldExists(string fieldName);
	bool locked;
private:
    /**
     * Armazena a classe correspondente ao objeto.
     */
    ClassRuntime *_classRuntime;
	
    /**
     * Armazena os fields do objeto (de instância).
     */
    map<string, Value> _fields;
	map<string, method_info*> _methods;
};

#endif /* classinstance_h */
