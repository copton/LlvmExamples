union Test {
	int i;
	double d
};

int foo(double d)
{
	union Test map;
	map.d = d;
	return map.i;
}
