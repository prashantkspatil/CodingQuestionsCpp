package pp.codingquestionscpp.question_list

import pp.codingquestionscpp.model.Question

sealed class UiEvent {
    data class OnQuestionClicked(val question: Question): UiEvent()
}
