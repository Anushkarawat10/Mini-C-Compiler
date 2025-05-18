int main()
{
    int a;
    int b;
    int result;
    
    // Initialize some values
    a = 5;
    b = 3;
    
    // Do calculations
    if(a > b)
    {
        result = a + b;
    }
    else
    {
        result = a - b;
    }
    
    // Use the result in a loop
    while(result > 0)
    {
        result = result - 1;
    }
} 