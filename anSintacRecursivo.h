#include <stdio.h>

FILE *origen;
char c;


char getC();
void error();
void P();
void YP();
void DP();
void Y();
void VP();
void D();
void L();
void C();
void V();
void G();
void S();
void U();
void W();
void H();
void X();
void O();
void B();
void I();
void J();
void N();
void R();
void K();
void E();
void EP();
void T();
void TP();
void F();
void A();
void CP();
void ZP();
void SP();

char getC(){
	char car=fgetc(origen);
	printf("\n lei: %c\n",car);
	return car;
}

void asignaArchivoAtomos(FILE *dir){
	origen=dir;
	c=getC();
}

void P(){
	printf("entre a P");
	if(c=='b' || c=='c' || c=='f' || c=='n' ||
		c=='g' || c=='['){

		DP();
		Y();
		YP();
		return;
	}else{
		error(" b c f n g [ ");
	}
}

void YP(){
	if(c=='['){
		Y();
		YP();
		return;
	}else if(c=='~'){
		return;
	}else{
		error(" [ (fin de cadena)");
	}
}

void Y(){
	if(c=='['){
		c=getC();
		VP();
		
		if(c=='a'){
			c=getC();
		}else{
			error("a");
		}

		if(c=='('){
			c=getC();
		}else{
			error("(");
		}

		if(c=='{'){
			c=getC();
		}else{
			error("{");
		}

		DP();
		B();

		if(c=='}'){
			c=getC();
		}else{
			error("}");
		}

		if(c==']'){
			c=getC();
		}else{
			error("]");
		}
		return;
	}else{
		error("[");
	}
}

void VP(){
	if(c=='b' || c=='c' || c=='f' || c=='n' ||
		c=='g'){
		V();
	}else if(c=='o'){
		c=getC();
	}else{
		error("b c f n g o ");
	}
}

void DP(){
	if(c=='b' || c=='c' || c=='f' || c=='n' ||
		c=='g'){
		D();
		DP();
	}else if(c=='a' || c=='x' || c=='i' || c=='w' ||
		c=='h'|| c=='p' || c=='u' || c=='t' || c=='[' ||
		c=='}'){
		return;
	}else{
		error("b c f n g a x i w h p u t [ }");
	}
}

void D(){
	if(c=='b' || c=='c' || c=='f' || c=='n' ||
		c=='g'){
		V();
		L();
		if(c==':'){
			c=getC();
		}else{
			error(":");
		}
	}else{
		error("b c f n g");
	}
}

void L(){
	if(c=='a'){
		c=getC();
		G();
		C();
	}else{
		error("a");
	}
}

void C(){
	if(c==','){
		c=getC();
		L();
	}else if(c==':'){
		c=getC();
	}else{
		error(", :");
	}
}

void V(){
	if(c=='b'){
		c=getC();
	}else if(c=='c'){
		c=getC();
	}else if(c=='f'){
		c=getC();
	}else if(c=='n'){
		c=getC();
	}else if(c=='g'){
		c=getC();
	}else{
		error("b c f n g");
	}	
}

void G(){
	if(c=='['){
		c=getC();
		if(c=='e'){
			c=getC();
		}else{
			error("e");
		}
		if(c==']'){
			c=getC();
		}else{
			error("]");
		}
	}else if(c==',' || c=='='|| c==':'|| c=='*'|| c=='/'
		|| c=='%'|| c=='#'|| c=='+'|| c=='-'|| c=='!'
		|| c=='?'|| c=='>'|| c=='<'|| c=='y'|| c=='m'){
		return;
	}else{
		error("[ , = : * / % # + - ! ? > < y m");
	}
}

void S(){
	if(c=='a'){
		A();
	}else if(c=='x'){
		X();
	}else if(c=='i'){
		I();
	}else if(c=='w'){
		W();
	}else if(c=='h'){
		H();
	}else if(c=='p'){
		N();
	}else if(c=='u'){
		c=getC();
		U();
	}else if(c=='t'){
		c=getC();
	}else if(c=='['){
		c=getC();
		if(c=='a'){
			c=getC();
		}else{
			error("a");
		}
		if(c=='('){
			c=getC();
		}else{
			error("(");
		}
		if(c==']'){
			c=getC();
		}else{
			error("]");
		}
		if(c==':'){
			c=getC();
		}else{
			error(":");
		}
	}else{
		error("a x i w h p u t [");
	}
}

void U(){
	if(c=='('){
		c=getC();
		F();
		if(c==')'){
			c=getC();
		}else{
			error(")");
		}
	}else if(c==':'){
		return;
	}else{
		error("( :");
	}
}

void W(){
	if(c=='w'){
		c=getC();
		if('('){
			c=getC();
		}else{
			error("(");
		}
		R();
		if(')'){
			c=getC();
		}else{
			error(")");
		}

		if('{'){
			c=getC();
		}else{
			error("{");
		}

		B();

		if('}'){
			c=getC();
		}else{
			error("}");
		}

	}else{
		error("w");
	}
}

void H(){
	if(c=='h'){
		c=getC();
		if(c=='{'){
			c=getC();
		}else{
			error("{");
		}
		B();
		if(c=='}'){
			c=getC();
		}else{
			error("}");
		}
		if(c=='w'){
			c=getC();
		}else{
			error("w");
		}
		if(c=='('){
			c=getC();
		}else{
			error("(");
		}
		R();
		if(c==')'){
			c=getC();
		}else{
			error(")");
		}
		if(c==':'){
			c=getC();
		}else{
			error(":");
		}
	}else{
		error("h");
	}
}

void X(){
	if(c=='x'){
		c=getC();
		if(c=='('){
			c=getC();
		}else{
			error("(");
		}

		if(c=='a'){
			c=getC();
		}else{
			error("a");
		}

		if(c==')'){
			c=getC();
		}else{
			error(")");
		}

		if(c=='{'){
			c=getC();
		}else{
			error("{");
		}

		O();

		if(c=='d'){
			c=getC();
		}else{
			error("d");
		}

		if(c=='['){
			c=getC();
		}else{
			error("[");
		}

		B();

		if(c==']'){
			c=getC();
		}else{
			error("]");
		}

		if(c=='}'){
			c=getC();
		}else{
			error("}");
		}

	}else{
		error("x");
	}
}

void O(){
	if(c=='k'){
		c=getC();
		if(c=='e'){
			c=getC();
		}else{
			error("e");
		}

		if(c=='['){
			c=getC();
		}else{
			error("[");
		}

		B();

		if(c==']'){
			c=getC();
		}else{
			error("]");
		}

		if(c=='q'){
			c=getC();
		}else{
			error("q");
		}

		if(c==':'){
			c=getC();
		}else{
			error(":");
		}

		if(c=='o'){
			c=getC();
		}else{
			error("o");
		}

	}else if(c=='d'){
		return;
	}else{
		error("k d");
	}
}

void B(){
	if(c=='a' || c=='x' || c=='i' || c=='w' || c=='h' ||
		c=='p'|| c=='u' || c=='t' ||c=='['){
		S();
		B();
	}else if(c==']' || c=='}'){
		return;
	}else{
		error("a x i w h p u t [ ] }");
	}
}

void I(){
	if(c=='i'){
		c=getC();
		if(c=='('){
			c=getC();
		}else{
			error("(");
		}
		R();
		if(c==')'){
			c=getC();
		}else{
			error(")");
		}
		if(c=='{'){
			c=getC();
		}else{
			error("{");
		}
		B();
		if(c=='}'){
			c=getC();
		}else{
			error("}");
		}
		J();
	}else{
		error("i");
	}
}

void J(){
	if(c=='l'){
		c=getC();
		if(c=='{'){
			c=getC();
		}else{
			error("{");
		}
		B();
		if(c=='}'){
			c=getC();
		}else{
			error("}");
		}
	}else if(c==':'){
		return;
	}else{
		error("l :");
	}
}

void N(){
	if(c=='p'){
		c=getC();
		if(c=='['){
			c=getC();
		}else{
			error("[");
		}
		if(c=='e'){
			c=getC();
		}else{
			error("e");
		}
		if(c==']'){
			c=getC();
		}else{
			error("]");
		}
		if(c=='{'){
			c=getC();
		}else{
			error("{");
		}
		B();
		if(c=='}'){
			c=getC();
		}else{
			error("}");
		}
	}else{
		error("p");
	}
}

void R(){
	if(c=='(' || c=='a' || c=='e' || c=='r' || c=='['){
		E();
		K();
		E();
	}else{
		error("( a e r [");
	}
}

void K(){
	if(c=='!' || c=='?' || c=='>' || c=='<' || c=='y'||
		c=='m'){
		c=getC();
	}else{
		error("! ? > < y m");
	}
}

void E(){
	if(c=='(' || c=='a' || c=='e' || c=='r' || c=='['){
		T();
		EP();
	}else{
		error("! ? > < y m");
	}
}

void EP(){
	if (c == '+'){
		c = getC();
		T();
		EP();
		return;
	} else if (c == '-'){
		c = getC();
		T();
		EP();
		return;
	} else if (c == '!' || c == '?' || c == '>' || c == '<' || c == 'y' || c == 'm' || c == ')'){
		return;
	} else {
		error("+ - ! ? > < y m )");
	}
}

void T(){
	if (c == '(' || c == 'a' || c == 'e' || c== 'r' || c == '['){
		F();
		TP();
		return;
	} else {
		error("( a e r [");
	} 
	
}

void TP(){
	if (c == '*'){
		c = getC();
		F();
		TP();
		return;
	} else if (c == '/'){
		c = getC();
		F();
		TP();
		return;
	} else if (c == '%'){
		c = getC();
		F();
		TP();
		return; 
	} else if (c == '#'){
		c = getC();
		F();
		TP();
		return;
	} else if (c == '+' || c == '-' || c == '!' || c == '?' || c == '>' 
				|| c == '<' || c == 'y' || c == 'm' || c == ')' ){
		return;
	} else {
		error("* / % # + - ! ? > < y m )");
	}
} 

void F(){
	if (c == '('){
		c = getC();
		E();
		if (c == ')')
			c = getC();
		else 
			error(")");
		return;

	} else if (c == 'a'){
		c = getC();
		G();
		return;

	} else if (c == 'e'){
		c = getC();
		return;

	} else if (c == 'r'){
		c = getC();
		return;

	} else if (c == '['){
		c = getC();
		if (c == 'a')
			c = getC();
		else
			error("a");

		if (c == '(')
			c = getC();
		else
			error("(");

		if (c == ')')
			c = getC();
		else
			error(")");
		
		if (c == ']')
			c = getC();
		else
			error("]");
		return;

	} else{
		error("( a e r [");
	}
}

void A(){
	if (c == 'a'){
		c = getC();
		G();
		if (c == '=')
			c = getC();
		else
			error("=");
		CP();
		if (c == ':')
			c = getC();
		else
			error(":");
		return;

	} else{
		error("a");
	}
}

void CP(){
	if (c == '+'){
		c == getC();
		ZP();
		if (c == ',')
			c = getC();
		else
			error(",");
		ZP();
		SP();
		return;

	} else if ( c == '(' || c == 'a' || c == 'e' || c == 'r' || c == '['){
		E();
		return;

	} else if (c == 's'){
		c = getC();
		return;

	} else {
		error("+ ( a e r [ s");
	}
}

void ZP(){
	if (c == 's'){
		c = getC();
		return;

	} else if (c == 'a'){
		c = getC();
		G();
		return;

	} else{
		error("s a");
	}
}

void SP(){
	if (c == ','){
		c = getC();
		ZP();
		SP();
		return;

	} else if (c == ':'){
		return;

	} else {
		error(", :");
	}
}

void error(char *charEsperado){
	printf("Error se esperaba: || %s || y se leyó ||%c|| \n",charEsperado,c);
}

