@ 'cobra' by multisn0w

.arm
.text
_start:
.global _start
  @ store registers
  stmfd  sp!, {r0-r12,lr}
  
  @ branch with link to the main function
  bl   main
  
  ldmfd  sp!, {r0-r12,pc}
  
