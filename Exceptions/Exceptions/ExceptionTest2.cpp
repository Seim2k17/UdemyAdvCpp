#include <iostream>

void ExceptionThrowing()
{
    bool intError = false;
    bool charError = false;
    bool floatError = true;
	bool stringError = false;

    int Value = -3;
    char itsAChar = 'A';
	std::string itsAString = "SimpleStringError";
    float floatValue = 23.3f;

    if (intError)
    {
        throw Value;
    }
    else if (charError)
    {
        throw itsAChar;
    }
    else if (floatError)
    {
        throw floatValue;
    }
	else if (stringError)
	{
		throw itsAString;
	}
    else
    {
    }
}

/*
int main()
{
    try
    {
        ExceptionThrowing();
    }
    catch (char const* e)
    {
        std::cout << "Errormessage (simple string): " << e << std::endl;
    }
	catch (char e)
	{
		std::cout << "Errormessage (char): " << e << std::endl;
	}
    catch (float e)
    {
        std::cout << "Errormessage (float): " << e << std::endl;
    }
    catch (int e)
    {
        std::cout << "Errormessage (int): " << e << std::endl;
    }

	int input;

	std::cin >> input;

    return 0;
}
*/