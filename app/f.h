int Factorial(int number)
{
    return number <= 1 ? number : Factorial(number - 1) * number;
}