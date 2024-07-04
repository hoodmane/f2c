      integer function func_norec()
        integer x
        x = 1
        func_norec = x
      end

      recursive integer function func_rec()
        integer x
        x = 1
        func_rec = x
      end

      subroutine subr_norec()
        integer x
        x = 1
      end

      recursive subroutine subr_rec()
        integer x
        x = 1
      end
