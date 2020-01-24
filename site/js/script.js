
function showem(){
    
    document.getElementById("wrapper").remove();
    loadel("views/about.html","container");
    
}

function laughem(){
    var buttonel = document.getElementById("wrapper");
    buttonel.innerHTML = "<p align='center' style='color:#e0e0e0'> You can't</p>";
}

function dropDownNav() {
    var x = document.getElementById("myTopnav");
    if (x.className === "topnav") {
      x.className += " responsive";
    } else {
      x.className = "topnav";
    }
  }






function switchActive(page) {
    window.localStorage.setItem("page",page);
    var nav = document.getElementById("myTopnav");
    var children = nav.children;

    for(var i = 0; i < children.length; i++) {
	var child = children[i];
	if (child.classList.contains("active")){
	    child.classList.remove("active");
	}
	if(child.classList.contains(page)){
	    child.classList.add("active");
	}
    }

    console.log("page = "+getFragment());
    
}

function getFragment() {
    var fragment = '';
    if(this.mode === 'history') {
        fragment = this.clearSlashes(decodeURI(location.pathname + location.search));
        fragment = fragment.replace(/\?(.*)$/, '');
        fragment = this.root != '/' ? fragment.replace(this.root, '') : fragment;
    } else {
        var match = window.location.href.match(/#(.*)$/);
        fragment = match ? match[1] : '';
    }
    return clearSlashes(fragment);
}


function clearSlashes(path) {
    return path.toString().replace(/\/$/, '').replace(/^\//, '');
}
