O algoritmo do Quick-Union

um array de N posicoes 
o valor da posicao representa o pai da posicao do array

para encontrar o pai, verifica se o numero da raiz = a posicao no array

1 é pai de 2 e 4, 4 é pai de 3. 
        0  1  2  3  4
id[] = [0, 1  1  4  1]

3 é filho de 4
verifica na posicao id[4] = 4,
como na posicao 4 não é 4, entende-se que o 4 é filho do numero do id e assim sem ciclos

e para fazer a uniao de outros componentes é só mudar o valor

        0  1  2  3  4  5  6  7 
id[] = [6, 1, 1, 4, 1, 5, 6, 7]

se quisesse colocar o 1 sendo filho do 6, é só substituir no id[1] = 6

        0  1  2  3  4  5  6  7 
id[] = [6, 6, 1, 4, 1, 5, 6, 7]


        6
   0        1
        2       4
                    3

criar um vetor de N posicoes
for i in range N:
    id[i] = i

// encontrar a raiz
int raiz(int n){
while i != id[i]:
    i = id[i];
    return i
}

int conectado(int p, int q){
    return raiz(p) == raiz(q)
}

void uniao(int p, int q){
    int i, j;
    i = raiz(p);
    j = raiz(q);
    id[i] = j;
}