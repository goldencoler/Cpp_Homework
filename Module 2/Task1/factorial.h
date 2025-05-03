#define GAMMA_F

#define INT_t 
#define FLOAT_t

#ifdef INT_t 
    int Factorial_Int(int n, bool debug_message = false); //Вычисление факториала целого числа
#endif

#ifdef FLOAT_t
    float Factorial_Float(float n, bool debug_message = false); //Вычисление факториала дробного числа
#endif

#ifdef GAMMA_F
    float Gamma_Factorial_Float(float n, bool debug_message = false); //Вычисление факториала дробного числа с помощью гамма функции 
#endif
