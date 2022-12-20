1-->2,3-->3,1-->4,5-->6,2
2-->1,3-->3,4-->4,2-->5,5
3-->1,1-->2,4-->4,2-->6,3
4-->1,5-->2,2-->3,2-->5,4
5-->2,5-->4,4
6-->1,2-->3,3

spaning tree
ec=0
edge=1
while ec!=nodecoun-1:
	find min edge from vertex list
	then add to MST
	ec++
finally sum all edge weights
