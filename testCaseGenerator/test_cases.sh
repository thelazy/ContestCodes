mkdir -p input output
g++ solution.cpp
pwd
st=1
while [ $st -lt 10 ]
do
  python test_generator.py > input/input0$st.txt
  echo $st "ready"
  st=$((st+1))
done

while [ $st -lt 20 ]
do
  python test_generator.py > input/input$st.txt
  echo $st "ready"
  st=$((st+1))
done

st=1
while [ $st -lt 10 ]
do
  echo "Cases $st"
  time ./a.out < input/input0$st.txt > output/output0$st.txt
  st=$((st+1))
done

while [ $st -lt 20 ]
do
  echo "Cases $st"
  time ./a.out < input/input$st.txt > output/output$st.txt
  st=$((st+1))
done
