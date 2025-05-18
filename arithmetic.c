int main() 
{
    int x;
    int y;
    int z;
    int result;

    // Initialize values
    x = 10;
    y = 5;
    z = 2;

    // Arithmetic expressions
    result = x * y + z * (x - y);
    
    // Nested conditions
    if(result > 50) 
    {
        if(x > y) 
        {
            result = result + 100;
        }
        else 
        {
            result = result - 50;
        }
    }
    else 
    {
        if(y > z) 
        {
            result = result * 2;
        }
        else 
        {
            result = result / 2;
        }
    }


} 