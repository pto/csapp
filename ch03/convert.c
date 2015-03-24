#define src_t unsigned char
#define dest_t long

void convert(src_t *sp, dest_t *dp) {
	*dp = (dest_t)*sp;
}

int main() {
	src_t s = 0xFF;
	dest_t d;

	convert(&s, &d);
}	
