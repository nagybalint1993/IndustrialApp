$(document).ready(function(){

    $(function(){
            $.ajax({url: "http://localhost:49184/api/types", success: function(result){
        $("#div1").html(result);
        }})
    });

});