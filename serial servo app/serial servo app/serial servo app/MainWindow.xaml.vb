Class MainWindow 

End Class
Sub SendSerialData(ByVal data As String)
    ' Send strings to a serial port. 
    Using com1 As IO.Ports.SerialPort =
            My.Computer.Ports.OpenSerialPort("COM3")
        com1.WriteLine("000")
    End Using
End Sub