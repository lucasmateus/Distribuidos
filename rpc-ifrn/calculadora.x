struct operands {
    int x;
    int y;
};

program SIMP_PROG {
    version SIMP_VERSION {
        int fatorial(operands) = 1;
        int modulo(operands) = 2;
        int max(operands) = 3;
        int soma(operands) = 4;
        int subtracao(operands) = 5;
        int devisao(operands) = 6;
        int multiplicacao(operands) = 7;
    } = 1;
} = 0x2fffffff;