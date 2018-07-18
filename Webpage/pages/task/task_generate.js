$(document).ready(function(){
    var table= $("#task-table");
    table.append("<tr><td>"+ "1 "+"</td><td>"+ "Autsoft PCB soldering" +"</td>   <td>"+ "leírás" +"</td></tr>")
    table.append("<tr><td>"+ "2 "+"</td><td>"+ "KTA 220 soldering" +"</td>   <td>"+ "leírás" +"</td></tr>")
    table.append("<tr><td>"+ "3 "+"</td><td>"+ "XCL 1100 soldering" +"</td>   <td>"+ "leírás" +"</td></tr>")


    $("#next-button").click(function(){
            $("#result-div").html("Task created");
    });

    $(function(){
        addTask();
    })
});