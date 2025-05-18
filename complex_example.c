int main() 
{
    int arr[5];
    int i;
    int sum;
    int max;

    // Initialize array
    i = 0;
    while(i < 5) 
    {
        arr[i] = i * 2;
        i = i + 1;
    }

    // Calculate sum with for loop
    sum = 0;
    for(i = 0; i < 5; i = i + 1) 
    {
        if(arr[i] > 5) 
        {
            sum = sum + arr[i];
        }
    }

    // Find maximum
    max = arr[0];
    i = 1;
    while(i < 5) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
        i = i + 1;
    }
} 