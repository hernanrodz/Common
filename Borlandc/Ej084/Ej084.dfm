object Form1: TForm1
  Left = 598
  Top = 165
  Width = 379
  Height = 176
  Caption = 'Boton por defecto y de cancelaci'#243'n'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 24
    Top = 16
    Width = 87
    Height = 16
    Caption = 'Bot'#243'n pulsado'
  end
  object CInformation: TEdit
    Left = 24
    Top = 40
    Width = 321
    Height = 25
    ReadOnly = True
    TabOrder = 0
  end
  object Button1: TButton
    Left = 24
    Top = 80
    Width = 89
    Height = 33
    Caption = '&Aceptar'
    Default = True
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 136
    Top = 80
    Width = 89
    Height = 33
    Cancel = True
    Caption = '&Cancelar'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 256
    Top = 80
    Width = 89
    Height = 33
    Caption = '&Salir'
    TabOrder = 3
    OnClick = Button3Click
  end
end
