document.addEventListener('DOMContentLoaded', function(){
    
    //aqui manejo lo es la direcion de la flecha
    const btn1 = document.getElementById('btn1');
    const btn2 = document.getElementById('btn2');
    const btn3 = document.getElementById('btn3');
    const btn4 = document.getElementById('btn4');
    var btnimg = document.getElementById('img1');
    var btnimg2 = document.getElementById('img2');
    let i = 0;

    btn1.onclick = function(){
        addTodo("../static/src/icon/der.png");
        if(i < 9)
            i = i + 1
            b = "../static/src/icon/" + i + ".png"
            addTodo2(b)
    }

    btn2.onclick = function(){
        addTodo("../static/src/icon/izq.png");
        if(i > 0)
            i = i - 1
            b = "../static/src/icon/" + i + ".png"
            addTodo2(b)
    }

    btn3.onclick = function(){
        addTodo("../static/src/icon/quit.png");
    }

    btn4.onclick = function(){
        addTodo("../static/src/icon/about.png");
    }

    function addTodo(x){
        btnimg.src = x;
    }

    function addTodo2(x){
        btnimg2.src = x;
    }
});