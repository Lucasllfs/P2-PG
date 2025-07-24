# 🧠 Ray Tracing — Projeto P2

Participantes:
  Eline Vieira - 815405
  Kaue Almeida Gonçalves de Oliveira - 813939
  Lucas Lima Felix da Silva - 814131
  Yasmin Rossafa de Souza - 813938

---

## ✅ O que foi feito

📚 Estudo e implementação dos capítulos do tutorial
🔵 Criação de uma cena personalizada com **esferas** e **três tipos de materiais**:
 - **Lambertiano** (difuso)
 - **Metal**
 - **Dielétrico** (vidro)
🎥 Alteração da **posição da câmera** e do **ponto de visão**
💾 Geração de uma **imagem final renderizada** (`image.ppm`)
💻 Organização do código com **arquivos separados por responsabilidade**
🗂️ Commits organizados por capítulos implementados

---

## 🖼️ Imagem Renderizada

A imagem gerada pode ser visualizada a partir do arquivo `image.ppm` na raiz do projeto. A renderização foi feita com resolução reduzida para otimizar o tempo de execução, usando:
📐 300 pixels de largura
🎯 500 amostras por pixel
🔁 Profundidade máxima de recursão: 50

 ---

## 📸 Descrição da Cena
A cena foi construída programaticamente no arquivo main.cc com os seguintes elementos:

Chão plano: esfera gigante com material difuso cinza

Múltiplas esferas pequenas espalhadas aleatoriamente, com:
🎨 Cores aleatórias e material lambertiano
⚙️ Materiais metálicos com fuzz variável
💎 Esferas de vidro com índice de refração 1.5

Três esferas principais:
🟢 Esfera de vidro no centro (0,1,0)
🟤 Esfera difusa à esquerda (-4,1,0)
⚪ Esfera metálica à direita (4,1,0)

A câmera foi posicionada para capturar essa cena com profundidade de campo realista:
👁️ Campo de visão: 20°
📍 Posição da câmera: (13, 2, 3)
🎯 Foco na origem: (0, 0, 0)
🔍 Efeito de desfoque com abertura 0.6 e distância focal 10.0 

