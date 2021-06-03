void main()
{
	int ar3[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(ar3) / sizeof(ar3[0]);

	for (int i = 0; i<n; ++i)
	{
		printf("%d ", ar3[i]);
	}
	printf("\n");
}

/*
void main()
{
int a[10];
printf("a size = %d\n", sizeof(a));
}

/*
void main()
{
int ar3[] = {1,2,3,4,5,6,7,8,9,10,11,12};

for(int i=0; i<11; ++i)//死
{
printf("%d ", ar3[i]);
}
printf("\n");
}

/*
int ar5[10];

void main()
{
int ar[10];
//完全初始化
int ar1[10] = {1,2,3,4,5,6,7,8,9,10};
//未完全初始化
int ar2[10] = {1,2,3,4,5};

int ar3[] = {1,2,3,4,5,6,7,8,9,10,11};

//int ar4[];
}

/*
void main()
{
char ar1[5];
short ar2[5];
int ar3[5];
double ar4[5];
}

/*
void main()
{
// 相同类型的数据
int ar[10];

int n = 10;
int br[n];  //常量
}

/*
void main()
{
int a1 = 0;
int b1 = 0;
int c1 = 0;
int d = 0;
int a1 = 0;
int b1;
int a11;
int a1;
int a100;

int a99, a100;
}

/*
void Move(char x, char y)
{
printf("%c->%c\n", x, y);
}

void Hanoi(int n, char A, char B, char C)
{
if(n == 1)
Move(A, C);
else
{
Hanoi(n-1, A, C, B);
Move(A, C);
Hanoi(n-1, B, A, C);
}
}

void main()
{
int n;
printf("input n:>");
scanf("%d", &n);

Hanoi(n, 'A', 'B', 'C');
}

/*
void Login()
{
int count = 0;
char pwd[7] = {0};
while(count < 3)
{
printf("请输入登录密码:>");

}
}

void main()
{
char passwd[] = "bit123";
Login(passwd);
}

/*
//自定义函数
int fun(int a, int b)
{
return a + b;
}

//求n的阶乘
size_t Fact1(int n)
{
size_t result = 1;
for(int i=1; i<=n; ++i)
{
result *= i;
}
return result;
}

size_t Fact2(int n)
{
if(n == 1)
return 1;
return n*Fact2(n-1);  //n! = n*(n-1)!
}

//1!+2!+3!+....+n!
size_t FactSum(int n)
{
size_t sum = 0;
for(int i=1; i<=n; ++i)
{
sum += Fact2(i);
}
return sum;
}




//主函数
void main()
{
int result = fun(1, 2);
printf("result = %d\n", result);
}
*/