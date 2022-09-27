#include <stdio.h>
void Add(int x,int y);
void sub(int x,int y);
void mul(int x,int y);
void Div(int x,int y);
void And(int x,int y);
void or(int x,int y);
void Not(int x);
void xor(int x,int y);
void rem(int x,int y);
void Inc(int x);
void Dec(int x);
void main(void)
{ int ID,a,b;
	scanf("%d",&ID);
	scanf("%d %d",&a,&b);
	
	switch(ID)
	{ case 1: Add(a,b);break;
	  case 2: sub(a,b);break;
	  case 3: mul(a,b);break;
	  case 4: Div(a,b);break;
	  case 5: And(a,b);break;
	  case 6: or(a,b);break;
	  case 7: Not(a);break;
	  case 8: xor(a,b);break;
	  case 9: rem(a,b);break;
	  case 10:Inc(a);break;
	  case 11:Dec(a);break;
	}
	
	
}
void Add(int x,int y)
{ printf("result = %d",x+y);
}
void sub(int x,int y)
{ printf("result = %d",x-y);
}

void mul(int x,int y)
{ printf("result = %d",x*y);
}



void Div(int x,int y)
{ printf("result = %d",x/y);
}

void And(int x,int y)
{ printf("result = %d",x&&y);
}

void or(int x,int y)
{ printf("result = %d",x||y);
}

void Not(int x)
{ printf("result = %d",!x);
}

void xor(int x,int y)
{ printf("result = %d",x!=y);
}

void rem(int x,int y)
{ printf("result = %d",x%y);
}
void Inc(int x)
{ printf("result = %d",x++);
}

void Dec(int x)
{ printf("result = %d",x--);
}