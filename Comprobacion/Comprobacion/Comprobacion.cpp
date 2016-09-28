// Comprobacion.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"

int 	t0	;
int 	t1	;
int 	t2	;
int 	t3	;
int 	t4	;
int 	t5	;
int 	t6	;
int 	t7	;
int 	t8	;
int 	t9	;
int 	t10	;
int 	t11	;
int 	t12	;
int 	t13	;
int 	t14	;
int 	t15	;
int 	t16	;
int 	t17	;
int 	t18	;
int 	t19	;
int 	t20	;
int 	t21	;
int 	t22	;
int 	t23	;
int 	t24	;
int 	t25	;
int 	t26	;
int 	t27	;
int 	t28	;
int 	t29	;
int 	t30	;
int 	t31	;
int 	t32	;
int 	t33	;
int 	t34	;
int 	t35	;
int 	t36	;
int 	t37	;
int 	t38	;
int 	t39	;
int 	t40	;
int 	t41	;
int 	t42	;
int 	t43	;
int 	t44	;
int 	t45	;
int 	t46	;
int 	t47	;
int 	t48	;
int 	t49	;
int 	t50	;
int 	t51	;
int 	t52	;
int 	t53	;
int 	t54	;
int 	t55	;
int 	t56	;
int 	t57	;
int 	t58	;
int Stack[1000];
int p=0;

//void imprimir
void imprimir_(){
	//y = x;
	t0=p+0;
	t1=Stack[t0];//t1=x

	t2=p+1;
	Stack[t2]=t1;//y=x
	
	//printf("%d\n",y);
	t3=p+1;
	t4=Stack[t3];
	printf("%d\n",t4);//imprime Y
}

//void arreglo(){
void arreglo_(){
	//array[0]=1;
	t5=1;
	t6=0;
	t7=p+0;
	t8=t7+t6;
	Stack[t8]=t5;

	//array[1]=2;
	t9=2;
	t10=1;
	t11=p+0;
	t12=t11+t10;
	Stack[t12]=t9;

	//y=array[1];
	t13=1;
	t14=p+0;
	t15=t13+t14;
	t16=Stack[t15];

	t17=p+2;
	Stack[t17]=t16;

	//imprimir(y);
	t18=p+2;
	t19=Stack[t18];//t19=y

	p=p+3;
	t20=p+0;
	Stack[t20]=t19;	
	imprimir_();
	p=p-3;
}

//int suma(int x, int y)
void suma_int_int_(){
	//return x+y;
	t26=p+1;
	t27=Stack[t26];//x

	t28=p+2;
	t29=Stack[t28];//y

	t30=t27+t29;//x+y

	//return
	t31=p+0;
	Stack[t31]=t30;
}

//int factorial(int n)
void factorial_int_(){
	t32=0;

	t33=p+1;
	t34=Stack[t33];

	if(t34==t32)goto L1;
	goto L2;

	L1:
		t35=1;
		t36=p+0;
		Stack[t36]=t35;
		goto L3;
	L2:
		//n-1
		t37=p+1;
		t38=Stack[t37]; //n
		t39=t38-1;

		p=p+2;
		
		t40=p+1;
		Stack[t40]=t39;
		factorial_int_();

		t41=p+0;
		t42=Stack[t41];//return
		p=p-2;

		//n*
		t43=p+1;
		t44=Stack[t43];
		t45=t44*t42;

		t46=p+0;
		Stack[t46]=t45;
		goto L3;
	L3:;

}


///void main()
void main(){
	//int x=5;
	t21=5;
	t22=p+0;
	Stack[t22]=t21;

	t23=p+0;
 	t24=Stack[t23];

	//imprimir(x);
	p=p+1;
	t25=p+0;
	Stack[t25]=t24;	
	imprimir_();
	p=p-1;

	//arreglo();
	p=p+1;
	arreglo_();
	p=p-1;

	t47=3;
	t48=5;
	p=p+1;
	t49=p+1;
	Stack[t49]=t47;

	t50=p+2;
	Stack[t50]=t48;
	suma_int_int_();

	t51=p+0;
	t52=Stack[t51];

	p=p-1;

	t53=p+0;
	Stack[t53]=t52;

/*******Metodo imprimir clase anterior******/
	t23=p+0;
 	t24=Stack[t23];

	//imprimir(x);
	p=p+1;
	t25=p+0;
	Stack[t25]=t24;	
	imprimir_();
	p=p-1;
/*******Fin Metodo imprimir clase anterior******/

	t54=5;
	p=p+1;

	t55=p+1;
	Stack[t55]=t54;
	factorial_int_();

	t56=p+0;
	t57=Stack[t56];
	p=p-1;

	t58=p+0;
	Stack[t58]=t57;

/*******Metodo imprimir clase anterior******/
	t23=p+0;
 	t24=Stack[t23];

	//imprimir(x);
	p=p+1;
	t25=p+0;
	Stack[t25]=t24;	
	imprimir_();
	p=p-1;
/*******Metodo imprimir Fin clase anterior******/
	_gettch();//es para pausar la terminal 
}









