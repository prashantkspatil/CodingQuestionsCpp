package pp.codingquestionscpp.question_list

import pp.codingquestionscpp.model.Question

data class QuestionsUiState(
    val questions: List<Question> = emptyList(),
    val isLoading: Boolean = false,
    val errorMessage: String? = null
)
