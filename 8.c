#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//求13个数相乘最大的数
int main(void){
	//这个神奇的字符串
	char *data = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int len = strlen(data);
	int key=0, val=0,size=13;
	long int rs = 1, num = 0;
	//printf("The data is %d, %d\r\n", data[1], data[1]-48);
	//return 1;
	while(key<len){
		int i = 0;
		rs = 1;
		while(i<size){
			val = data[key+i] - 48;
			//printf("val is %d\r\n", val);
			rs *= val;
			if(val==0){//遇见0了，直接跳到0后的位置开始
				key += i+1;
				break;
			}
			i++;
		}
		if(rs){
			if(rs > num){
				printf("The (%ld) num is %ld\r\n", num, rs);
				num = rs;
			}

		}
		key++;
	}
	printf("The largest of the data is %ld\r\n", num);
	return 1;
}
//好吧，说说这个蛋疼的问题，英文不好是硬伤，硬是把1000个数中，理解成了4位数0.0
//好在结果不对，又翻查了下
