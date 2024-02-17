;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname design-quiz) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
(require 2htdp/image)


; Problem: Design a function that consumes two images and produces true if the first is larger than the second.

; (Image, Image) -> Boolean
; Determine whether the area of the first image is larger than the second image. Returns false if the areas are equal.
(check-expect (is-larger? (rectangle 2 2 "solid" "red") (rectangle 2 4 "solid" "red")) false)
(check-expect (is-larger? (rectangle 2 2 "solid" "red") (rectangle 2 2 "solid" "red")) false)
(check-expect (is-larger? (rectangle 4 4 "solid" "red") (rectangle 2 4 "solid" "red")) true)

(define (is-larger? img1 img2)
  (> (image-area img1) (image-area img2)))



; Image -> Natural
; Computes the area of an image
(check-expect (image-area (rectangle 2 4 "solid" "red")) (* 2 4))

(define (image-area img)
  (* (image-width img) (image-height img)))
