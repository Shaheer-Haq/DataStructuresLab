//#include<iostream>
//using namespace std;
//
//class point
//{
//private:
//	float x, y;
//
//public:
//	point()
//	{
//		x = 0;
//		y = 0;
//	}
//
//	point(float x, float y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void setX(float x)
//	{
//		this->x = x;
//	}
//
//	void setY(float y)
//	{
//		this->y = y;
//	}
//
//	float getX()
//	{
//		return x;
//	}
//
//	float getY()
//	{
//		return y;
//	}
//
//	double distance(point p)
//	{
//		return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
//	}
//
//};
//
//int main()
//{
//	float a, b;
//	point p1(3, 6);
//
//	cout<<"Enter the coordinates of the point: "<<endl;
//	cout<<"Enter a: "<<endl;
//	cin>>a;
//
//	cout<<"Enter b: "<<endl;
//	cin>>b;
//	point p2(a, b);
//
//	cout << "Distance between the points is: " << p1.distance(p2) << endl;
//	
//
//	return 0;
//}