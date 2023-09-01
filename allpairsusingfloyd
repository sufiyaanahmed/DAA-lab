#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int a[10][10],n;
void floyds();
int min(int,int);
void main()
{
int i,j;
clrscr();
printf(&quot;\nenter the no. of vertices:\t&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;\nenter the cost matrix:\n&quot;);
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
scanf(&quot;%d&quot;,&amp;a[i][j]);
}
}
floyds();
getch();
}
void floyds()
{
int i,j,k;
for(k=1;k&lt;=n;k++)
{
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
}
}
}
printf(&quot;\nall pair shortest path matrix is:\n&quot;);
for(i=1;i&lt;=n;i++)
{
for(j=1;j&lt;=n;j++)
{
printf(&quot;%d\t&quot;,a[i][j]);
}
printf(&quot;\n\n&quot;);
}
}
int min(int x,int y)
{
if(x&lt;y)
{
return x;
}
else
{
return y;
}
}
