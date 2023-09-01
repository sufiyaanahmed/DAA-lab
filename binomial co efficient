#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int bin(intn,int k)
{
inti,j,c[10][10];
for(i=0;i&lt;=n;i++)
{
for(j=0;j&lt;=k;j++)
{
if(j==0 || i==j)
c[i][j]=1;
else
c[i][j]=c[i-1][j-1]+c[i-1][j];

}
}
return c[n][k];
}
void main()
{
intn,k;
printf(&quot;Enter the value of n &amp; k such that n&gt;k\n&quot;);
scanf(&quot;%d%d&quot;, &amp;n,&amp;k);
printf(&quot;C(%d,%d)=%d\n&quot;,n,k,bin(n,k));
getch();
}
