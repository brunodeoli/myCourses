

const listaOpcoes = document.querySelector(".detalhesConta_Transacoes")
listaOpcoes.addEventListener("click", identificarOpcoes)

function identificarOpcoes(event){
    const cliq = event.target
    escondeClasses()
    if(cliq.tagName == "LI"){
        const id = cliq.id
        const secaoEscolha = document.querySelector(`div[data-id="${id}"]`)
        secaoEscolha.classList.add("mostrar")
    }
}

function escondeClasses(){
    const divs = document.querySelectorAll(".secaoTransacao .container div")
    //divs.forEach(callback(divs.classList.remove("mostrar")))
    for(let i = 0; i < divs.length; i++){
        divs[i].classList.remove("mostrar")
    }
}