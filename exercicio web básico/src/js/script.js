document.addEventListener("DOMContentLoaded", function () {
    // Aguarda o evento "DOMContentLoaded" antes de executar o código interno.

    function createCarousel(carouselContainerId) {
        // Função para configurar cada carrossel individualmente.

        const carouselContainer = document.getElementById(carouselContainerId);
        // Obtém o elemento pai do carrossel usando o ID fornecido.

        const carousel = carouselContainer.querySelector(".carousel");
        // Seleciona o elemento do carrossel dentro do contêiner específico.
        // Usa querySelector no contexto do carouselContainer.

        const carouselItems = carousel.querySelectorAll(".carousel-item");
        // Seleciona todos os itens do carrossel dentro do carrossel específico.

        const prevBtn = carouselContainer.querySelector(".prev-btn");
        // Seleciona o botão de navegação para a esquerda dentro do contêiner específico.

        const nextBtn = carouselContainer.querySelector(".next-btn");
        // Seleciona o botão de navegação para a direita dentro do contêiner específico.

        let currentIndex = 0;
        // Inicializa uma variável para rastrear o índice atual do item no carrossel.

        function updateCarousel() {
            // Atualiza a posição do carrossel com base no índice atual.
            const translateValue = -currentIndex * 100 + "%";
            carousel.style.transform = "translateX(" + translateValue + ")";
        }

        function nextSlide() {
            // Avança para o próximo item no carrossel e atualiza a exibição.
            currentIndex = (currentIndex + 1) % carouselItems.length;
            updateCarousel();
        }

        function prevSlide() {
            // Retrocede para o item anterior no carrossel e atualiza a exibição.
            currentIndex = (currentIndex - 1 + carouselItems.length) % carouselItems.length;
            updateCarousel();
        }

        prevBtn.addEventListener("click", prevSlide);
        // Adiciona um ouvinte de evento ao botão de navegação para a esquerda.

        nextBtn.addEventListener("click", nextSlide);
        // Adiciona um ouvinte de evento ao botão de navegação para a direita.
    }

    const carouselIds = ["carousel1", "carousel2", "carousel3", "carousel4"];
    // Lista de IDs dos contêineres de carrossel desejados.

    carouselIds.forEach(createCarousel);
    // Para cada ID de carrossel, chama a função createCarousel para configurar o carrossel correspondente.
});
