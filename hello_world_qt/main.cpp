int main()
{
  asm(
    "mov %ax, 0x0E07 \n"
    "xor %bx, %bx \n"
    "int $0x10"
  );
}
