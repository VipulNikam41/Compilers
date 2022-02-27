for i in {1..21}
do
	if test -f "./pa3inputs/test${i}.micro"; then
		echo $i
		./runme.sh ./pa3inputs/test${i}.micro out
		diff out ./pa3outputs/test${i}.out -w -B
	fi
done
