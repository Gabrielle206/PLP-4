O erro ocorre porque:

1) A union só pode conter um valor válido de um dos campos de cada vez.
2) No momento em que você passa f1 (que contém um círculo) para a função com o tipo retangulo, você está lendo um campo diferente daquele que foi escrito.
3) Isso causa comportamento indefinido em C, pois a linguagem não garante o que acontece quando se lê um membro da union diferente daquele que foi armazenado por último.
