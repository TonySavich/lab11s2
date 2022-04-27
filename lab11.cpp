#include <iostream>

/*class CodeGenerator
{
public:
    enum Lang { JAVA = 0, C_PLUS_PLUS = 1, PHP = 2 };
    CodeGenerator(Lang language) { _language = language; }
    std::string generateCode()
    {
        switch (_language) {
        case JAVA: someCodeRelatedThing();       //return generated java code
        case C_PLUS_PLUS: someCodeRelatedThing();//return generated C++ code
        case PHP: someCodeRelatedThing();         //return generated PHP code
        }
        throw new std::logic_error("Bad language");
    }
    std::string someCodeRelatedThing() // used in generateCode()
    {
        switch (_language) {
        case JAVA: return “CPP code”;        //return generated java-related stuff
        case C_PLUS_PLUS: //return generated C++-related stuff
        case PHP:         //return generated PHP-related stuff
        }
        throw new std::logic_error("Bad language");
    }

private:
    Lang _language;
}


*/

class CodeGenerate {
public:
    CodeGenerate() {

    }
    virtual ~CodeGenerate() {

    }
    std::string Creator() {

    }


protected:
   virtual std::string m_Code() = 0;
};


class JAVAg :public CodeGenerate {
public:
    JAVAg() : CodeGenerate() {

    }

    virtual ~JAVAg(){

    }

protected:

    std::string m_Code() override
    {
        
    }

};


class PHPg :public CodeGenerate {
public:
    PHPg() : CodeGenerate() {

    }

    virtual ~PHPg() {

    }

protected:

    std::string m_Code() override
    {

    }

};


CodeGenerate* Factory(const std::string& name)
{

    CodeGenerate* language = nullptr;

    if ((name[0] == 'P') && (name[1] == 'H') && (name[2] == 'P'))
    {
        language = new PHPg();
   
    }
 

    else if ((name[0] == 'J') && (name[1] == 'A') && (name[2] == 'V') && (name[3] == 'A'))
    {
        language = new JAVAg();

    }
    else  {
        std::cout << " bad language";
    }

    return language;
}





int main()
{

}

