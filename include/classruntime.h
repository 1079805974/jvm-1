#ifndef classruntime_h
#define classruntime_h

#include "tipos.h"
#include "classloader.h"

#include <map>
#include <string>

using namespace std;

class ClassInstance;
/**
 * Representação de uma classe carregada durante o runtime.在运行时加载的类的表示。
 */
class ClassRuntime {

public:
    /**
     * @brief Construtor padrão.
     * @param classFile A \c ClassFile correspondente à classe.
     */
    ClassRuntime(ClassFile *classFile);
    
    /**
     * @brief Destrutor padrão.
     */
    ClassFile* getClassFile();
    
    /**
     * @brief Insere um valor no field estático informado.简单插入一个有消息的字段值。
     * @param value O valor que será inserido.
     * @param fieldName O nome do field estático.
     */
    void putValueIntoField(Value value, string fieldName);
    
    /**
     * @brief Obtém o valor de um field estático.
     * @param fieldName O valor do field que será obtido.
     * @return Retorna o valor correspondente ao field estático.
     */
    Value getValueFromField(string fieldName);
    
    /**
     * @brief Verifica se o field informado existe.
     * @param fieldName O nome do field que será verificado a existência.
     * @return Retorna \c true caso o field exista, e \c false caso contrário.
     */
    bool fieldExists(string fieldName);
	ClassFile *_classFile;
	string name;
	ClassInstance *reflectClass;

private:
    /**
     * A \c ClassFile correspondente à classe.
     */
    
    uint16_t accessFlags;
    string superClassName;
    method_info* methods;
    //ClassLoader loader;
    ClassRuntime* superClass;
    /**
     * Os fields estáticos da classe.
     */
    map<string, ClassRuntime*> interfaces;
    map<string, Value> _staticFields;
    
};

#endif /* classruntime_h */
