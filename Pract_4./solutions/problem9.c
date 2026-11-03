#include <stdio.h>

int main()
{
	unsigned char a, b, c;
	scanf("%hhu %hhu %hhu", &a, &b, &c);

	const unsigned char  mask_bit6_bit7 = 0xC0; // 1100 0000
	const unsigned char	      mask_bit7 = 0x80; // 1000 0000
	const unsigned char       mask_bit0 = 0x01; // 0000 0001
	const unsigned char mask_nibble_low = 0x0F; // 0000 1111

	unsigned char decoded_a =
		(a << 2) |						
		((a & mask_bit6_bit7) >> 6);	
	unsigned char decoded_b =
		(b & ~(mask_bit0 | mask_bit7)) |	
		((b & mask_bit7) >> 7) |			
		(b << 7);							
	unsigned char decoded_c = c ^ (mask_nibble_low << 2);

	printf("%c%c%c\n", (char)decoded_a, (char)decoded_b, (char)decoded_c);

	return 0;
}