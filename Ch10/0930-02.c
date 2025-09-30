typedef struct point
{
	int x;
	int y;
} Point;

void * swqp(Point *pa, Point *pb)
{
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}
	Point temp = *pa;
	*pa = *pb;
	*pb = temp;

	return pa;
}

int test_point()
{
	Point p1 = { 10, 20 };
	Point p2 = { 0 };

	Point p3 = { 0 };

	p3 = mul10(p1);
	// swqp(&p1, &p2);

	return 0;
}

Point mul10(Point pt)
{
	Point pr = { 0 };
	pr.x *= 10;
	pr.y *= 10;

	return pr;
}