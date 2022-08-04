#include<constream.h>
class multi_cube
{
public:
int multi(int r)

{
	return(r*r);

}
int cube(int s)

{
	return(s*s*s);

}
void showdata(int r,int s)
{

	cout<<"\nMulti value is:"<<multi(r);
	cout<<"\nCube value is:"<<cube(s);


}
}mc;
main()
{
	clrscr();
	mc.showdata(2,3);
	getch();


}