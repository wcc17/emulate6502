LDA #$80
STA $01
ADC $01,X
ADC $0011
ADC $01

LDX #$02
LDY #$03

LDA #$51
STA $02,x
LDA #$52
STA $0005,x
LDA #$53
STA $0008,y

LDA $0008,y