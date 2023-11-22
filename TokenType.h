
#ifndef _TOKENTYPES_H_
#define _TOKENTYPES_H_

typedef enum{
    NONE, 
    BACKSLASH,      //"\"

    /** 通配符 */
    ANY_NUM,            //'\d'
    NOT_ANY_NUM,        //'\D'
    LETTER_NUM__,       //'\w'
    NOT_LETTER_NUM__,   //'\W'
    BEGIN_END,          //'\b'
    WRAP,               //'\c'
    ENTER,              //'\r'
    FORM_FEED,          //'\f'
    TAB,                //'\t'
    ENPTY,              //'\s'
    NOT_EMPTY,          //'\S'
    // '\A'
    // '\Z'
    CARET,              //'^'
    DOLLAR,             //'$'
    POINT,              //'.'
    MINUS,              //"-"

    /** 括号 */
    LBRACE,         //"("
    RBRACE,         //")"
    LBRACKET,       //"["
    RBRACKET,       //"]"
    LPARENT,        //"{"
    RPARENT,        //"}"

    /** 匹配次数 
     * {n}
     * {n,m}
     * {n, }
     * * = {0, }
     * + = {1, }
     * ? = {0,1}
    */
    STAR,           //'*'
    PLUS,           //'+'
    QMARK,          //'?'
    COMMA,          //','

    /** 字面量 */
    DIGIT,          //'数字'
    STRING_LITERAL, //'字符串'

    /** 逻辑符号 */
    OR,             //"|"
    
    /** 文件结尾 */
    // EOF
}TokenTypes;


#endif