setwd("C:\\Users\\mschuee\\Desktop")

library(igraph)

CreateGraphAndWrite <- function(file)
{
  graph <- erdos.renyi.game(5000, 200000, type = "gnm")
  df <- get.data.frame(graph, what=c("edges"))
  
  write.table(df, file = file)
}

CreateGraphAndWrite("Graph1.txt")
CreateGraphAndWrite("Graph2.txt")
CreateGraphAndWrite("Graph3.txt")
CreateGraphAndWrite("Graph4.txt")
CreateGraphAndWrite("Graph5.txt")
CreateGraphAndWrite("Graph6.txt")
CreateGraphAndWrite("Graph7.txt")
CreateGraphAndWrite("Graph8.txt")
CreateGraphAndWrite("Graph9.txt")
CreateGraphAndWrite("Graph10.txt")



