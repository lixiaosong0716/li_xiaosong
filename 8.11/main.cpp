8.11a
int number;
cout <<number<<endl;

8.11b
double realPtr;
long integerPtr;
realPtr=integerPtr;
8.11c
int *x,y;
*x=&y;
8.11d
char *s[]="this is a character arrsy";
for(;*s != '\0' ++s)
    cout <<*s<<' ';
8.11e
short number,result;
void *genericPtr =&number;
result=*genericPtr+7;
8.11f
double x=1934;
double *xPtr=&x;
cout<<*xPtr<<endl;


