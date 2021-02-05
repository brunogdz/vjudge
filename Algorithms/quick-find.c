/*
    Para verificar se o p está conectado a q, verifica se no vetor
    eles tem um id igual
            0  1  2  3  4  5  6  7  8  9
    id[] = [0, 1, 1, 3, 3, 0, 0, 1, 3, 3]

    0 5 6 - estao conectados
    1 2 7 - estão conectados
    3 4 8 9 - estão conectados

    cria um vetor vazio
    leia numero de posicoes
    aloca no vetor n posicoes com os valores
    for i in range n:
        id[i] = i;

    para verificar se estao conectados
    o vetor id na posicao p devera ser igual ao vetor id na posicao q
    se id[q] == id[p]:
        imprima estao conectados
    
    na funcao uniao(int p, int q){}
    int pid, qid;
    pid = id[q]
    qid = id[q]

    for i in range id.length:
        if id[i] == pid:
            id[i] = qid;
    }
    Ex: 
    uniao(8,4)
    pid = 8
    qid = 4

    O(N²)

*/