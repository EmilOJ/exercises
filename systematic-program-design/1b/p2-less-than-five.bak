;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname p2-less-than-five) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
; Design a problem to check if the length of a string is less than 5.

; String -> Boolean
; Determine whether the lenght of a string is less than 5


(check-expect (less-than-five "hej") true)
(check-expect (less-than-five "hejhej") false)
(check-expect (less-than-five "12345") false)


; (define (less-than-five str) false)
(define (less-than-five str)
  (< (string-length str) 5))
