/*
    Inicialize com o N de objetos ( 0 até N) 
    void union ( int p, int q) = unir
    int = boolean conectado(int p, int q)
    int encontrar (int p) = mostrar quem ta conectado ao p
    int contador() = mostrar quantos componentes tem no programa

    ler a entrada
    inicializa a union
    while i < entrada
        leia p 
        leia q
    se p não estiver conectado a q então:
        unir ( p , q)
        imprimir p + " " + q
    fim

    3
    1 3
    2 4
    1 4


    1 3
    2 4
    1 2 3 4
*/