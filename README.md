# Parser-for-Python-like-Language
Implemented with Flex and Bison
## Supported Features ✊
Semantic analysis: <br/>
Variables: initialization (int, float, string), overriding variables with the same name, execution of arithmetic operations (* / - +), support order of operations.
Dictionaries: initialization(keys: primitive types, values: everything), implementation of items() and setdefault(keyname, value=None) functions.
print(): implementation of the function. Fully compatible with variables and dictionaries. <br/>

Syntax & Lexical analysis:<br/>
Comments <br/>
Modules Import <br/>
Classes: definition, constructor definition, object creation. <br/>
Functions: definiction, call. <br/>
Conditional Statements: if, elif, else. <br/>
For Loops <br/>
Lambda Functions- only calculus <br/>

Compile & Run <br/>
$ flex flex.l <br/>
$ bison -y -d bison.y <br/>
$ gcc -c y.tab.c lex.yy.c <br/>
$ gcc myParser.exe -c <br/>
$ gcc myParser.exe y.tab.c lex.yy.c -o flex -lm <br/>
$ ./flex input.py <br/>

Team Members 👪
<a href="https://github.com/aflorentia"> Florentia Afentaki </a> <br />
<a href="https://github.com/asigourou"> Alkistis Sigourou </a> <br />
<a href="https://github.com/stavros-alexiou"> Stavros Alexiou </a> <br />
Stelios Nikoladakis 
