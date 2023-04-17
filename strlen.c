//strlen函数实现
//求字符串长度

int my_strlen(const char* str)//const great 
{
	int count = 0;
	assert(str);//great
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}