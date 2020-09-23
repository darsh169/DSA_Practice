def heapify(arr,i,n):
    #n=len(arr)
    largest=i
    l=2*i+1
    r=2*i+2
    if l<n and arr[l]>arr[largest]:
        largest=l
    if r<n and arr[r]>arr[largest]:
        largest=r
    if largest!=i:
        arr[largest],arr[i]=arr[i],arr[largest]
        heapify(arr,largest,n)

def b_heap_max(arr):
    start=(len(arr)-1)//2
    while start>=0:
        heapify(arr,start,len(a))
        start-=1
def b_heap_min(arr):
    start=(len(arr)-1)//2
    while start>=0:
        heap_min(arr,start,len(arr))
        start-=1

def heap_min(arr,i,n):
    smallest=i
    l=2*i+1
    r=2*i+2
    if l<n and arr[smallest]>arr[l]:
        smallest=l
    if r<n and arr[smallest]>arr[r]:
        smallest=r
    if smallest!=i:
        arr[smallest],arr[i]=arr[i],arr[smallest]
        return heap_min(arr,smallest,n)

def insert(arr,key):
    arr.append(key)
    index=len(arr)-1
    parent=(index-1)//2
    while (index-1)//2>=0:
        #  print(index)
        parent=(index-1)//2
        if arr[parent]<arr[index]:
            arr[parent],arr[index]=arr[index],arr[parent]
        index=parent

def remove(arr,i):
    arr[0],arr[i]=arr[i],arr[0]
    start=i//2
    while start>=0:
        heap_min(arr,start,i)
        start-=1
    #arr.pop()
def heapify2(arr,i):
    #arr[i],arr[0]=arr[0],arr[i]
    start=i
    n=len(a)
    while start<=(len(a)-1)//2:#last node having children
        l=start*2+1
        r=start*2+2
        m=start
        if l<n and arr[l]>arr[m]:
            m=l
        if r<n and arr[r]>arr[m]:
            m=r
        if m!=start:
            arr[m],arr[start]=arr[start],arr[m]
            heapify2(arr,m)
        start+=1




a=list(map(int,input().split()))

print(a)
heapify2(a,0)
print(a)
