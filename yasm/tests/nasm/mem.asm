[BITS 16]
a32 mov ax, [eax]
mov ax, [eax]
mov ax, [di]
mov ax, [di-si+si]
mov ax, [bx-(bx-di)-2]
mov ax, [2*(bx+di)-bx-2*di]
mov ax, [2*(bx*2+di)-bx-2*bx-2*di]
mov ax, [2*(bx*2)-bx-2*bx+di]
mov ax, [(bx+di)*(bx+di)-bx*bx-2*bx*di-di*di+di]
mov ax, [(blah2-blah)*di]
blah
inc ax
blah2
mov ax, [(blah2-blah)*di]
[BITS 32]
mov ax, [si]
mov ax, [esi+400]
mov ax, [byte esi+400]
a16 mov ax, [esi+eax]
mov ax, [400-esi]
mov ax, [esi-eax]
mov ax, [(esi+400)+200]
mov ax, [esi+400-200]
mov ax, [eax+400/200]
mov ax, [400/200+eax]
mov ax, [eax+'a']
mov ax, [eax+eax-eax+eax-ebx+ebx]
mov ax, [eax*5]
mov ax, [10]
mov ax, [edx]
mov ax, [edx*2]
mov ax, [nosplit edx*2]
mov ax, [edx*1]
mov ax, [nosplit edx*1]
mov ax, [edx*3]
mov ax, [esi+ebp]
mov ax, [ebp+esi]
mov ax, [ebp*1+esi]