O erro ocorre porque:

A union só pode conter um valor válido de um dos campos de cada vez.

No momento em que você passa f1 (que contém um círculo) para a função com o tipo retangulo, você está lendo um campo diferente daquele que foi escrito.

Isso causa comportamento indefinido em C, pois a linguagem não garante o que acontece quando se lê um membro da union diferente daquele que foi armazenado por último.
